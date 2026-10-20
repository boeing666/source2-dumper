#pragma once

class CCitadel_Modifier_Upgrade_Headhunter_HeadshotBuff : public CCitadelModifier /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    ParticleIndex_t m_hTrailParticle; // offset 0x140, size 0x4, align 255
    GameTime_t m_tTrailStartTime; // offset 0x144, size 0x4, align 255
};
