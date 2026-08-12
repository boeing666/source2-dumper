#pragma once

class CBaseConstraint : public CBoneConstraintBase /*0x0*/  // sizeof 0x60, align 0xFF [vtable abstract] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CUtlString m_name; // offset 0x20, size 0x8, align 8
    Vector m_vUpVector; // offset 0x28, size 0xC, align 4
    char _pad_0034[0x4]; // offset 0x34
    CUtlLeanVector< CConstraintSlave > m_slaves; // offset 0x38, size 0x10, align 8
    CUtlVector< CConstraintTarget > m_targets; // offset 0x48, size 0x18, align 8
};
