#pragma once

class CCitadel_Modifier_Hideout_Teleport : public CCitadelModifier /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    CUtlString m_sDestMap; // offset 0x148, size 0x8, align 8
    CUtlString m_sDestLocString; // offset 0x150, size 0x8, align 8
    CUtlString m_sLandmarkName; // offset 0x158, size 0x8, align 8
};
