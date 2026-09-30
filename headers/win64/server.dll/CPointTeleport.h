#pragma once

class CPointTeleport : public CServerOnlyPointEntity /*0x0*/  // sizeof 0x4D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    VectorWS m_vSaveOrigin; // offset 0x4B0, size 0xC, align 4
    QAngle m_vSaveAngles; // offset 0x4BC, size 0xC, align 4
    bool m_bTeleportParentedEntities; // offset 0x4C8, size 0x1, align 1
    bool m_bTeleportUseCurrentAngle; // offset 0x4C9, size 0x1, align 1
    char _pad_04CA[0x6]; // offset 0x4CA
};
