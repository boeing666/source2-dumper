#pragma once

class CCitadelHideoutTeleportTrigger : public C_BaseTrigger /*0x0*/  // sizeof 0xD10, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCD8]; // offset 0x0
    CUtlSymbolLarge m_strDestLandmark; // offset 0xCD8, size 0x8, align 8
    CUtlSymbolLarge m_strDestMap; // offset 0xCE0, size 0x8, align 8
    CUtlSymbolLarge m_strDestLocString; // offset 0xCE8, size 0x8, align 8
    CEntityIOOutput m_OnHideoutTeleport; // offset 0xCF0, size 0x18, align 255
    CUtlSymbolLarge m_strPropModel; // offset 0xD08, size 0x8, align 8
};
