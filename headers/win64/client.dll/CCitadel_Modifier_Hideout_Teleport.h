#pragma once

class CCitadel_Modifier_Hideout_Teleport : public CCitadelModifier /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    CUtlString m_sDestMap; // offset 0x130, size 0x8, align 8
    CUtlString m_sDestLocString; // offset 0x138, size 0x8, align 8
    CUtlString m_sLandmarkName; // offset 0x140, size 0x8, align 8
};
