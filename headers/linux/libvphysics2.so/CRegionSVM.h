#pragma once

class CRegionSVM  // sizeof 0x30, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< RnPlane_t > m_Planes; // offset 0x0, size 0x18, align 8
    CUtlVector< uint32 > m_Nodes; // offset 0x18, size 0x18, align 8
};
