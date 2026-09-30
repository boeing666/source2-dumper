#pragma once

class CCitadel_Modifier_Drag : public CCitadel_Modifier_Link /*0x0*/  // sizeof 0x188, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x168]; // offset 0x0
    CHandle< C_BaseEntity > m_hDragSource; // offset 0x168, size 0x4, align 4
    QAngle m_qCapturedBearing; // offset 0x16C, size 0xC, align 4
    Vector m_vCapturedOffset; // offset 0x178, size 0xC, align 4
    char _pad_0184[0x4]; // offset 0x184
};
