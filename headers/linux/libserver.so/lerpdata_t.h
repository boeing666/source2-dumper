#pragma once

struct lerpdata_t  // sizeof 0x50, align 0x10 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    CHandle< CBaseEntity > m_hEnt; // offset 0x0, size 0x4, align 4
    MoveType_t m_MoveType; // offset 0x4, size 0x1, align 1
    char _pad_0005[0x3]; // offset 0x5
    GameTime_t m_flStartTime; // offset 0x8, size 0x4, align 255
    VectorWS m_vecStartOrigin; // offset 0xC, size 0xC, align 4
    char _pad_0018[0x8]; // offset 0x18
    Quaternion m_qStartRot; // offset 0x20, size 0x10, align 16
    ParticleIndex_t m_nFXIndex; // offset 0x30, size 0x4, align 255
    char _pad_0034[0x1C]; // offset 0x34
};
