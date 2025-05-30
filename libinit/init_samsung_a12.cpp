/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>
#include <libinit_utils.h>
#include <unistd.h>

#include "vendor_init.h"

static const variant_info_t a125f_info = {
    .hwc_value = "",
    .sku_value = "a12",

    .brand = "Samsung",
    .device = "a12",
    .marketname = "Samsung Galaxy A12",
    .model = "SM-A125F",
    .build_fingerprint = "samsung/a12zh/a12:12/SP1A.210812.016/A125FZHS6CXJ1:user/release-keys"
};


static const std::vector<variant_info_t> variants = {
    a125f_info,
};

void vendor_load_properties() {
    if (access("/system/bin/recovery", F_OK) != 0) {
        search_variant(variants);
    }
}
