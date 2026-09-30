#pragma once

class CCitadel_Modifier_Teleport : public CCitadelModifier /*0x0*/  // sizeof 0x168, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    VectorWS m_vDest; // offset 0x140, size 0xC, align 4
    QAngle m_angDestAngles; // offset 0x14C, size 0xC, align 4
    Vector m_vDestVelocity; // offset 0x158, size 0xC, align 4
    char _pad_0164[0x4]; // offset 0x164
};
