#pragma once

class CCitadel_Destroyable_Building_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x1D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x90]; // offset 0x0
    CAnimGraphParamRef< bool > m_bHitTrigger; // offset 0x90, size 0x28, align 8
    CAnimGraphParamRef< char* > m_eState; // offset 0xB8, size 0x30, align 8
    CAnimGraphParamRef< float32 > m_flHealth; // offset 0xE8, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bActive; // offset 0x110, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flHealthPercent; // offset 0x138, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bVulnerable; // offset 0x160, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bDestroyed; // offset 0x188, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flExposedDurationFraction; // offset 0x1B0, size 0x28, align 8
};
