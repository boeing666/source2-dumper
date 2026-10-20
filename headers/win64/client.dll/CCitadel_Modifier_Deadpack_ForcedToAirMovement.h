#pragma once

class CCitadel_Modifier_Deadpack_ForcedToAirMovement : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    bool m_bForceApplied; // offset 0x140, size 0x1, align 1
    char _pad_0141[0x3]; // offset 0x141
    Vector m_vForwardAtCast; // offset 0x144, size 0xC, align 4
    bool m_bDashCancelled; // offset 0x150, size 0x1, align 1
    char _pad_0151[0x7]; // offset 0x151
};
