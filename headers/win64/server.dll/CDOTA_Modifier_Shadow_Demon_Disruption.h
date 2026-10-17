#pragma once

class CDOTA_Modifier_Shadow_Demon_Disruption : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_flHealth; // offset 0x1AA8, size 0x4, align 4
    float32 m_flDisseminate_Duration; // offset 0x1AAC, size 0x4, align 4
    CHandle< CBaseEntity > m_hDisseminateAbility; // offset 0x1AB0, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AB4, size 0x4, align 255
};
