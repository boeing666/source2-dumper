#pragma once

class CDOTA_Item_TeleportScroll : public CDOTA_Item /*0x0*/  // sizeof 0x680, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x658]; // offset 0x0
    CHandle< CBaseEntity > m_hTeleportTarget; // offset 0x658, size 0x4, align 4
    ParticleIndex_t m_nFXCaster; // offset 0x65C, size 0x4, align 255
    ParticleIndex_t m_nFXOrigin; // offset 0x660, size 0x4, align 255
    ParticleIndex_t m_nFXDestination; // offset 0x664, size 0x4, align 255
    VectorWS m_vDestination; // offset 0x668, size 0xC, align 4
    int32 m_iMinDistance; // offset 0x674, size 0x4, align 4
    float32 m_flBaseTeleportTime; // offset 0x678, size 0x4, align 4
    float32 m_flExtraTeleportTime; // offset 0x67C, size 0x4, align 4
};
