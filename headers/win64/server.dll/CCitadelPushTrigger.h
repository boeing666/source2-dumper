#pragma once

class CCitadelPushTrigger : public CTriggerModifier /*0x0*/  // sizeof 0xA20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA00]; // offset 0x0
    Vector m_vPush; // offset 0xA00, size 0xC, align 4
    QAngle m_angPushEntitySpace; // offset 0xA0C, size 0xC, align 4
    float32 m_flSpeed; // offset 0xA18, size 0x4, align 4
    char _pad_0A1C[0x4]; // offset 0xA1C
};
