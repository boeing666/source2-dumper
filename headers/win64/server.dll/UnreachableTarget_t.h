#pragma once

struct UnreachableTarget_t  // sizeof 0x30, align 0xFF [trivial_dtor] (server)
{
    UnreachableTargetType_t nTargetType; // offset 0x0, size 0x4, align 4
    CHandle< CBaseEntity > hTargetEnt; // offset 0x4, size 0x4, align 4
    VectorWS vecTargetWorldPos; // offset 0x8, size 0xC, align 4
    char _pad_0014[0x4]; // offset 0x14
    CGlobalSymbol sTargetSymbol; // offset 0x18, size 0x8, align 8
    GameTime_t fExpireTime; // offset 0x20, size 0x4, align 255
    VectorWS vecTargetLocationWhenUnreachable; // offset 0x24, size 0xC, align 4
};
