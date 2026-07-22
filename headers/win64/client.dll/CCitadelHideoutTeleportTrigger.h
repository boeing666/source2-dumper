#pragma once

class CCitadelHideoutTeleportTrigger : public C_BaseTrigger /*0x0*/  // sizeof 0xAF0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xAB8]; // offset 0x0
    CUtlSymbolLarge m_strDestLandmark; // offset 0xAB8, size 0x8, align 8
    CUtlSymbolLarge m_strDestMap; // offset 0xAC0, size 0x8, align 8
    CUtlSymbolLarge m_strDestLocString; // offset 0xAC8, size 0x8, align 8
    CEntityIOOutput m_OnHideoutTeleport; // offset 0xAD0, size 0x18, align 255
    CUtlSymbolLarge m_strPropModel; // offset 0xAE8, size 0x8, align 8
};
