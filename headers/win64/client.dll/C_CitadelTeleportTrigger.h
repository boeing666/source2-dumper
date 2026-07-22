#pragma once

class C_CitadelTeleportTrigger : public C_BaseTrigger /*0x0*/  // sizeof 0xA88, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0xA78]; // offset 0x0
    Vector m_vExitOrigin; // offset 0xA78, size 0xC, align 4 | MNetworkEnable
    char _pad_0A84[0x4]; // offset 0xA84
};
