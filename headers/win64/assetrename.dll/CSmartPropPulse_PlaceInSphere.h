#pragma once

class CSmartPropPulse_PlaceInSphere : public CPulseCell_BaseFlow /*0x0*/  // sizeof 0x90, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CPulse_OutflowConnection m_Place; // offset 0x48, size 0x48, align 255
};
