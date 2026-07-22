#pragma once

class CDOTA_Item_TeleportScroll : public CDOTA_Item /*0x0*/  // sizeof 0x958, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x92C]; // offset 0x0
    CHandle< CBaseEntity > m_hTeleportTarget; // offset 0x92C, size 0x4, align 4
    ParticleIndex_t m_nFXCaster; // offset 0x930, size 0x4, align 255
    ParticleIndex_t m_nFXOrigin; // offset 0x934, size 0x4, align 255
    ParticleIndex_t m_nFXDestination; // offset 0x938, size 0x4, align 255
    VectorWS m_vDestination; // offset 0x93C, size 0xC, align 4
    int32 m_iMinDistance; // offset 0x948, size 0x4, align 4
    float32 m_flBaseTeleportTime; // offset 0x94C, size 0x4, align 4
    float32 m_flExtraTeleportTime; // offset 0x950, size 0x4, align 4
    char _pad_0954[0x4]; // offset 0x954
};
