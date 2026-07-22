#pragma once

struct WearableData_t  // sizeof 0x10, align 0xFF [trivial_dtor] (server)
{
    item_definition_index_t nItemDef; // offset 0x0, size 0x4, align 255
    int32 nSkin; // offset 0x4, size 0x4, align 4
    int32 nGroup; // offset 0x8, size 0x4, align 4
    CHandle< CBaseEntity > hWearable; // offset 0xC, size 0x4, align 4
};
