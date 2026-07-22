#pragma once

class CCitadel_Modifier_ChargeDragEnemy : public CCitadelModifier /*0x0*/  // sizeof 0xF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    QAngle m_qRelativeOffset; // offset 0xC0, size 0xC, align 4
    float32 m_flRelativeDist; // offset 0xCC, size 0x4, align 4
    float32 m_flMaxDist; // offset 0xD0, size 0x4, align 4
    Vector m_vecOffsetDir; // offset 0xD4, size 0xC, align 4
    VectorWS m_vecStartPosition; // offset 0xE0, size 0xC, align 4
    char _pad_00EC[0x4]; // offset 0xEC
};
