#pragma once

struct inv_image_data_t  // sizeof 0xF0, align 0x8 (client) {MGetKV3ClassDefaults}
{
    inv_image_map_t map; // offset 0x0, size 0x10, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf
    inv_image_item_t item; // offset 0x10, size 0x20, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf
    inv_image_camera_t camera; // offset 0x30, size 0x38, align 4 | MPropertyFriendlyName MPropertyAutoExpandSelf
    inv_image_light_sun_t lightsun; // offset 0x68, size 0x1C, align 4 | MPropertyFriendlyName MPropertyDescription MPropertyAutoExpandSelf
    inv_image_light_fill_t lightfill; // offset 0x84, size 0x1C, align 4 | MPropertyFriendlyName MPropertyDescription MPropertyAutoExpandSelf
    inv_image_light_barn_t light0; // offset 0xA0, size 0x20, align 4 | MPropertyFriendlyName MPropertyDescription MPropertyAutoExpandSelf
    inv_image_light_barn_t light1; // offset 0xC0, size 0x20, align 4 | MPropertyFriendlyName MPropertyDescription MPropertyAutoExpandSelf
    inv_image_clearcolor_t clearcolor; // offset 0xE0, size 0xC, align 4 | MPropertyFriendlyName MPropertyDescription MPropertyAutoExpandSelf
    char _pad_00EC[0x4]; // offset 0xEC
};
