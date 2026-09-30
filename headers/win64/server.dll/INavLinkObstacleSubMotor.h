#pragma once

class INavLinkObstacleSubMotor : public INavLinkSubMotor /*0x0*/  // sizeof 0x30, align 0xFF [vtable abstract] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecObstacles; // offset 0x18, size 0x18, align 8
};
