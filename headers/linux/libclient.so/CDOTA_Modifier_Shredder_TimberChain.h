#pragma once

class CDOTA_Modifier_Shredder_TimberChain : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 speed; // offset 0x1A58, size 0x4, align 4
    int32 radius; // offset 0x1A5C, size 0x4, align 4
    int32 damage; // offset 0x1A60, size 0x4, align 4
    int32 tree_splinter_count; // offset 0x1A64, size 0x4, align 4
};
