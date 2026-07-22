#pragma once

struct VPhysXAggregateData_t  // sizeof 0x150, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    uint16 m_nFlags; // offset 0x0, size 0x2, align 2
    uint16 m_nRefCounter; // offset 0x2, size 0x2, align 2
    char _pad_0004[0x4]; // offset 0x4
    CUtlVector< uint32 > m_bonesHash; // offset 0x8, size 0x18, align 8
    CUtlVector< CUtlString > m_boneNames; // offset 0x20, size 0x18, align 8
    CUtlVector< uint16 > m_indexNames; // offset 0x38, size 0x18, align 8
    CUtlVector< uint16 > m_indexHash; // offset 0x50, size 0x18, align 8
    CUtlVector< matrix3x4a_t > m_bindPose; // offset 0x68, size 0x18, align 8
    CUtlVector< VPhysXBodyPart_t > m_parts; // offset 0x80, size 0x18, align 8
    CUtlVector< PhysShapeMarkup_t > m_shapeMarkups; // offset 0x98, size 0x18, align 8
    CUtlVector< VPhysXConstraint2_t > m_constraints2; // offset 0xB0, size 0x18, align 8
    CUtlVector< VPhysXJoint_t > m_joints; // offset 0xC8, size 0x18, align 8
    PhysFeModelDesc_t* m_pFeModel; // offset 0xE0, size 0x8, align 8
    CUtlVector< uint16 > m_boneParents; // offset 0xE8, size 0x18, align 8
    CUtlVector< uint32 > m_surfacePropertyHashes; // offset 0x100, size 0x18, align 8
    CUtlVector< VPhysXCollisionAttributes_t > m_collisionAttributes; // offset 0x118, size 0x18, align 8
    CUtlVector< CUtlString > m_debugPartNames; // offset 0x130, size 0x18, align 8
    CUtlString m_embeddedKeyvalues; // offset 0x148, size 0x8, align 8
};
