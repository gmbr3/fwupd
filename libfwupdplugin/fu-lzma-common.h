/*
 * Copyright (C) 2021 Richard Hughes <richard@hughsie.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#pragma once

#include <fwupd.h>

GBytes *
fu_lzma_decompress_bytes(GBytes *blob, GError **error) G_GNUC_NON_NULL(1);
GBytes *
fu_lzma_compress_bytes(GBytes *blob, GError **error) G_GNUC_NON_NULL(1);
