#pragma once

class C_DOTA_Item_TeleportScroll : public C_DOTA_Item /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CHandle< C_BaseEntity > m_hTeleportTarget; // offset 0x760, size 0x4, align 4
    ParticleIndex_t m_nFXCaster; // offset 0x764, size 0x4, align 255
    ParticleIndex_t m_nFXOrigin; // offset 0x768, size 0x4, align 255
    ParticleIndex_t m_nFXDestination; // offset 0x76C, size 0x4, align 255
    VectorWS m_vDestination; // offset 0x770, size 0xC, align 4
    int32 m_iMinDistance; // offset 0x77C, size 0x4, align 4
    float32 m_flBaseTeleportTime; // offset 0x780, size 0x4, align 4
    float32 m_flExtraTeleportTime; // offset 0x784, size 0x4, align 4
};
