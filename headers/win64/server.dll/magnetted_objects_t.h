#pragma once

struct magnetted_objects_t  // sizeof 0x10, align 0xFF [trivial_dtor] (server)
{
    char _pad_0000[0x8]; // offset 0x0
    CHandle< CBaseEntity > hEntity; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
};
