#pragma once

class CCSCustomHudLayoutState  // sizeof 0x110, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    bool m_bInputCaptureEnabled; // offset 0x30, size 0x1, align 1
    char _pad_0031[0x7]; // offset 0x31
    C_NetworkUtlVectorBase< HUDPanelHasClass_t > m_vecHasClasses; // offset 0x38, size 0x18, align 8
    C_NetworkUtlVectorBase< HUDPanelDialogVariableString_t > m_vecDialogVariableStrings; // offset 0x50, size 0x18, align 8
    char _pad_0068[0xA0]; // offset 0x68
    CPlayerSlot m_playerSlot; // offset 0x108, size 0x4, align 4
    char _pad_010C[0x4]; // offset 0x10C
};
