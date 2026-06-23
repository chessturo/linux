// SPDX-License-Identifier: GPL-2.0

/// Generates an assembly string that includes both `$asm1` and `$asm2`. At boot or module load, the
/// text of the kernel is patched from `$asm1` to `$asm2` iff `$cpucap` is enabled for the current
/// CPU. See [`arch/arm64/include/asm/alternative.h`](srctree/arch/arm64/include/asm/alternative.h).
///
// Adapted from `arch/arm64/include/asm/alternative-macros.h`.
#[macro_export]
macro_rules! asm_alternative {
    ($asm1:expr, $asm2:expr, $cpucap:expr, $($op:tt)*) => {
        ::core::arch::asm!(
            concat!(
                "661:\n\t",
                $asm1, "\n",
                "662:\n",
                ".pushsection .altinstructions,\"a\"\n",
                " .word 661b - .\n",                    /* label           */
                " .word 663f - .\n",                    /* new instruction */
                " .hword {cpucap_val}\n",               /* cpucap          */
                " .byte 662b-661b\n",                   /* source len      */
                " .byte 664f-663f\n",                   /* replacement len */
                ".popsection\n",
                ".subsection 1\n",
                "663:\n\t",
                $asm2, "\n",
                "664:\n\t",
                /* If any of these .org directive fail, it means that asm1 and asm2
                * don't have the same length. This used to be written as
                *
                * .if ((664b-663b) != (662b-661b))
                *   .error "Alternatives instruction length mismatch"
                * .endif
                *
                * but most assemblers die if insn1 or insn2 have a .inst. This should
                * be fixed in a binutils release posterior to 2.25.51.0.2 (anything
                * containing commit 4e4d08cf7399b606 or c1baaddf8861).
                *
                * TODO: Does this happen with LLVM?
                */
                ".org	. - (664b-663b) + (662b-661b)\n\t",
                ".org	. - (662b-661b) + (664b-663b)\n\t",
                ".previous\n"
            ),
            cpucap_val = const $cpucap,
            $($op)*
        )
    };
}
