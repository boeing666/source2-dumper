#pragma once

struct SosEditItemInfo_t  // sizeof 0x30, align 0x8 (soundsystem) {MGetKV3ClassDefaults}
{
    SosEditItemType_t itemType; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlString itemName; // offset 0x8, size 0x8, align 8
    CUtlString itemTypeName; // offset 0x10, size 0x8, align 8
    char _pad_0018[0x8]; // offset 0x18
    CUtlString itemKVString; // offset 0x20, size 0x8, align 8
    Vector2D itemPos; // offset 0x28, size 0x8, align 4
};
