#pragma once

class C_DOTA_Item_TeleportScroll : public C_DOTA_Item /*0x0*/  // sizeof 0x8F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8CC]; // offset 0x0
    CHandle< C_BaseEntity > m_hTeleportTarget; // offset 0x8CC, size 0x4, align 4
    ParticleIndex_t m_nFXCaster; // offset 0x8D0, size 0x4, align 255
    ParticleIndex_t m_nFXOrigin; // offset 0x8D4, size 0x4, align 255
    ParticleIndex_t m_nFXDestination; // offset 0x8D8, size 0x4, align 255
    VectorWS m_vDestination; // offset 0x8DC, size 0xC, align 4
    int32 m_iMinDistance; // offset 0x8E8, size 0x4, align 4
    float32 m_flBaseTeleportTime; // offset 0x8EC, size 0x4, align 4
    float32 m_flExtraTeleportTime; // offset 0x8F0, size 0x4, align 4
    char _pad_08F4[0x4]; // offset 0x8F4
};
