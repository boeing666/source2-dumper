#pragma once

class CVPhysXSurfacePropertiesList  // sizeof 0x18, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CPhysSurfaceProperties* > m_surfacePropertiesList; // offset 0x0, size 0x18, align 8 | MKV3TransferName
};
