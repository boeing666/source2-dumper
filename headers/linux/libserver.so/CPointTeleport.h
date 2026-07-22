#pragma once

class CPointTeleport : public CServerOnlyPointEntity /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    VectorWS m_vSaveOrigin; // offset 0x788, size 0xC, align 4
    QAngle m_vSaveAngles; // offset 0x794, size 0xC, align 4
    bool m_bTeleportParentedEntities; // offset 0x7A0, size 0x1, align 1
    bool m_bTeleportUseCurrentAngle; // offset 0x7A1, size 0x1, align 1
    char _pad_07A2[0x6]; // offset 0x7A2
};
