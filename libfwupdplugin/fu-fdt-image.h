/*
 * Copyright (C) 2022 Richard Hughes <richard@hughsie.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#pragma once

#include "fu-firmware.h"

#define FU_TYPE_FDT_IMAGE (fu_fdt_image_get_type())
G_DECLARE_DERIVABLE_TYPE(FuFdtImage, fu_fdt_image, FU, FDT_IMAGE, FuFirmware)

struct _FuFdtImageClass {
	FuFirmwareClass parent_class;
};

FuFirmware *
fu_fdt_image_new(void);

GBytes *
fu_fdt_image_get_attr(FuFdtImage *self, const gchar *key, GError **error) G_GNUC_NON_NULL(1, 2);
gboolean
fu_fdt_image_get_attr_u32(FuFdtImage *self, const gchar *key, guint32 *val, GError **error)
    G_GNUC_NON_NULL(1, 2);
gboolean
fu_fdt_image_get_attr_u64(FuFdtImage *self, const gchar *key, guint64 *val, GError **error)
    G_GNUC_NON_NULL(1, 2);
gboolean
fu_fdt_image_get_attr_str(FuFdtImage *self, const gchar *key, gchar **val, GError **error)
    G_GNUC_NON_NULL(1, 2);
gboolean
fu_fdt_image_get_attr_strlist(FuFdtImage *self, const gchar *key, gchar ***val, GError **error)
    G_GNUC_NON_NULL(1, 2);
void
fu_fdt_image_set_attr(FuFdtImage *self, const gchar *key, GBytes *blob) G_GNUC_NON_NULL(1, 2);
void
fu_fdt_image_set_attr_uint32(FuFdtImage *self, const gchar *key, guint32 value)
    G_GNUC_NON_NULL(1, 2);
void
fu_fdt_image_set_attr_uint64(FuFdtImage *self, const gchar *key, guint64 value)
    G_GNUC_NON_NULL(1, 2);
void
fu_fdt_image_set_attr_str(FuFdtImage *self, const gchar *key, const gchar *value)
    G_GNUC_NON_NULL(1, 2);
void
fu_fdt_image_set_attr_strlist(FuFdtImage *self, const gchar *key, gchar **value)
    G_GNUC_NON_NULL(1, 2);
GPtrArray *
fu_fdt_image_get_attrs(FuFdtImage *self) G_GNUC_NON_NULL(1);
