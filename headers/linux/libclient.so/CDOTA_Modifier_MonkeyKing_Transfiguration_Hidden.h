#pragma once

class CDOTA_Modifier_MonkeyKing_Transfiguration_Hidden : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< C_BaseEntity > m_hOriginalSoldier; // offset 0x1A78, size 0x4, align 4
    ParticleIndex_t m_nRingFXIndex; // offset 0x1A7C, size 0x4, align 255
    VectorWS m_vTargetOrigin; // offset 0x1A80, size 0xC, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
