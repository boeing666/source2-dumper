#pragma once

class C_CitadelTeleportTrigger : public C_BaseTrigger /*0x0*/  // sizeof 0xCA8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC98]; // offset 0x0
    VectorWS m_vExitOrigin; // offset 0xC98, size 0xC, align 4
    char _pad_0CA4[0x4]; // offset 0xCA4
};
