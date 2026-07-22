#pragma once

class CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance /*0x0*/  // sizeof 0x2010, align 0xFF [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x4D0]; // offset 0x0
    CBaseAnimGraphController m_animationController; // offset 0x4D0, size 0x1B38, align 255 | MNetworkEnable
    char _pad_2008[0x8]; // offset 0x2008
};
