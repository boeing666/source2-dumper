#pragma once

class CCitadel_Modifier_Hideout_Teleport : public CCitadelModifier /*0x0*/  // sizeof 0xE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CUtlString m_sDestMap; // offset 0xD0, size 0x8, align 8
    CUtlString m_sDestLocString; // offset 0xD8, size 0x8, align 8
    CUtlString m_sLandmarkName; // offset 0xE0, size 0x8, align 8
};
