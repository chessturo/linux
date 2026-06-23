// SPDX-License-Identifier: GPL-2.0

//! Module containing all of the arch-specific Rust code
//!
//! This module should be used sparingly and only for those things where alternatives do not exist
//! on other architectures. If a feature can be implemented on multiple different architectures, it
//! should live in the usual place with the different implementations gated behind appropriate
//! `#[cfg]` attributes.

#[cfg(CONFIG_ARM64)]
pub mod arm64;
#[cfg(CONFIG_X86_64)]
pub mod x86_64;
