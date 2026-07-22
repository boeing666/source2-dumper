#pragma once

class CCitadelPushTrigger : public CTriggerModifier /*0x0*/  // sizeof 0x908, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F0]; // offset 0x0
    Vector m_vPush; // offset 0x8F0, size 0xC, align 4
    QAngle m_angPushEntitySpace; // offset 0x8FC, size 0xC, align 4
};
