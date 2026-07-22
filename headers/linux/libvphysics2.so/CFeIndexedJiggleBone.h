#pragma once

class CFeIndexedJiggleBone  // sizeof 0xA4, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
public:
    uint32 m_nNode; // offset 0x0, size 0x4, align 4
    uint32 m_nJiggleParent; // offset 0x4, size 0x4, align 4
    CFeJiggleBone m_jiggleBone; // offset 0x8, size 0x9C, align 4
};
