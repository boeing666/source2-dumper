#pragma once

class CNPC_Boss_Tier3Core_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x1E0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraph2ParamOptionalRef< bool > m_bCharge; // offset 0xC0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bDeath; // offset 0xD8, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bExplode; // offset 0xF0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bIdle; // offset 0x108, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bReform; // offset 0x120, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< bool > m_bRelease; // offset 0x138, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flChargeDuration; // offset 0x150, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flDeathDuration; // offset 0x168, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flExplodeDuration; // offset 0x180, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flIdleDuration; // offset 0x198, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flReformDuration; // offset 0x1B0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< float32 > m_flReleaseDuration; // offset 0x1C8, size 0x18, align 8
};
