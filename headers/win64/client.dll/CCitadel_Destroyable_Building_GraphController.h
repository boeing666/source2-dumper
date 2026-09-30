#pragma once

class CCitadel_Destroyable_Building_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x208, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraphParamRef< bool > m_bHitTrigger; // offset 0xC0, size 0x28, align 8
    CAnimGraphParamRef< char* > m_eState; // offset 0xE8, size 0x30, align 8
    CAnimGraphParamRef< float32 > m_flHealth; // offset 0x118, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bActive; // offset 0x140, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flHealthPercent; // offset 0x168, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bVulnerable; // offset 0x190, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bDestroyed; // offset 0x1B8, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flExposedDurationFraction; // offset 0x1E0, size 0x28, align 8
};
