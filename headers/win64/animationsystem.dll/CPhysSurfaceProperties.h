#pragma once

class CPhysSurfaceProperties  // sizeof 0xC8, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8 | MKV3TransferName
    uint32 m_nameHash; // offset 0x8, size 0x4, align 4
    uint32 m_baseNameHash; // offset 0xC, size 0x4, align 4
    char _pad_0010[0x8]; // offset 0x10
    bool m_bHidden; // offset 0x18, size 0x1, align 1 | MKV3TransferName
    char _pad_0019[0x7]; // offset 0x19
    CUtlString m_description; // offset 0x20, size 0x8, align 8 | MKV3TransferName
    CPhysSurfacePropertiesPhysics m_physics; // offset 0x28, size 0x18, align 4 | MKV3TransferName
    CPhysSurfacePropertiesVehicle m_vehicleParams; // offset 0x40, size 0x8, align 4 | MKV3TransferName
    CPhysSurfacePropertiesSoundNames m_audioSounds; // offset 0x48, size 0x60, align 8 | MKV3TransferName
    CPhysSurfacePropertiesAudio m_audioParams; // offset 0xA8, size 0x20, align 4 | MKV3TransferName
};
