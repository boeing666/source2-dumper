#pragma once

struct PhysObjectHeader_t  // sizeof 0x40, align 0x8 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    PhysInterfaceId_t type; // offset 0x0, size 0x4, align 4
    CHandle< C_BaseEntity > hEntity; // offset 0x4, size 0x4, align 4
    CUtlSymbolLarge fieldName; // offset 0x8, size 0x8, align 8
    bool bSaveObject; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x7]; // offset 0x11
    CUtlSymbolLarge modelName; // offset 0x18, size 0x8, align 8
    AABB_t bbox; // offset 0x20, size 0x18, align 255
    physics_save_sphere_t sphere; // offset 0x38, size 0x4, align 4
    int32 iCollide; // offset 0x3C, size 0x4, align 4
};
