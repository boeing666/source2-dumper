#pragma once

class CCSCustomHudLayoutState  // sizeof 0x198, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CPlayerSlot m_playerSlot; // offset 0x30, size 0x4, align 4
    bool m_bInputCaptureEnabled; // offset 0x34, size 0x1, align 1
    char _pad_0035[0x3]; // offset 0x35
    CNetworkUtlVectorBase< HUDPanelHasClass_t > m_vecHasClasses; // offset 0x38, size 0x60, align 8
    CNetworkUtlVectorBase< HUDPanelDialogVariableString_t > m_vecDialogVariableStrings; // offset 0x98, size 0x60, align 8
    char _pad_00F8[0xA0]; // offset 0xF8
};
