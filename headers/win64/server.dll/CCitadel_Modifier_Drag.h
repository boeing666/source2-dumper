#pragma once

class CCitadel_Modifier_Drag : public CCitadel_Modifier_Link /*0x0*/  // sizeof 0x190, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x170]; // offset 0x0
    CHandle< CBaseEntity > m_hDragSource; // offset 0x170, size 0x4, align 4
    QAngle m_qCapturedBearing; // offset 0x174, size 0xC, align 4
    Vector m_vCapturedOffset; // offset 0x180, size 0xC, align 4
    char _pad_018C[0x4]; // offset 0x18C
};
