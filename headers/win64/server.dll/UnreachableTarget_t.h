#pragma once

struct UnreachableTarget_t  // sizeof 0x58, align 0x8 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    CRelativeLocation m_location; // offset 0x0, size 0x48, align 8
    GameTime_t m_flExpireTime; // offset 0x48, size 0x4, align 255
    VectorWS m_vecTargetLocationWhenUnreachable; // offset 0x4C, size 0xC, align 4
};
