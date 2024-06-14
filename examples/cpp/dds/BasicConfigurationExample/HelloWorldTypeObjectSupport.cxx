// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file HelloWorldTypeObjectSupport.cxx
 * Source file containing the implementation to register the TypeObject representation of the described types in the IDL file
 *
 * This file was generated by the tool fastddsgen.
 */

#include "HelloWorldTypeObjectSupport.hpp"

#include <mutex>
#include <string>

#include <fastcdr/xcdr/external.hpp>
#include <fastcdr/xcdr/optional.hpp>
#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/log/Log.hpp>
#include <fastdds/dds/xtypes/common.hpp>
#include <fastdds/dds/xtypes/type_representation/ITypeObjectRegistry.hpp>
#include <fastdds/dds/xtypes/type_representation/TypeObject.hpp>
#include <fastdds/dds/xtypes/type_representation/TypeObjectUtils.hpp>

#include "HelloWorld.hpp"


using namespace eprosima::fastdds::dds::xtypes;

// TypeIdentifier is returned by reference: dependent structures/unions are registered in this same method
void register_HelloWorld_type_identifier(
        TypeIdentifierPair& type_ids_HelloWorld)
{

    ReturnCode_t return_code_HelloWorld {eprosima::fastdds::dds::RETCODE_OK};
    return_code_HelloWorld =
        eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
        "HelloWorld", type_ids_HelloWorld);
    if (eprosima::fastdds::dds::RETCODE_OK != return_code_HelloWorld)
    {
        StructTypeFlag struct_flags_HelloWorld = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::NOT_APPLIED,
                false, false);
        QualifiedTypeName type_name_HelloWorld = "HelloWorld";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_HelloWorld;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_HelloWorld;
        CompleteTypeDetail detail_HelloWorld = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_HelloWorld, ann_custom_HelloWorld, type_name_HelloWorld.to_string());
        CompleteStructHeader header_HelloWorld;
        header_HelloWorld = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_HelloWorld);
        CompleteStructMemberSeq member_seq_HelloWorld;
        {
            TypeIdentifierPair type_ids_index;
            ReturnCode_t return_code_index {eprosima::fastdds::dds::RETCODE_OK};
            return_code_index =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_uint32_t", type_ids_index);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_index)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "index Structure member TypeIdentifier unknown to TypeObjectRegistry.");
                return;
            }
            StructMemberFlag member_flags_index = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructKind::NOT_APPLIED,
                    false, false, false, false);
            MemberId member_id_index = 0x00000000;
            bool common_index_ec {false};
            CommonStructMember common_index {TypeObjectUtils::build_common_struct_member(member_id_index, member_flags_index, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_index, common_index_ec))};
            if (!common_index_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure index member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_index = "index";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_index;
            ann_custom_HelloWorld.reset();
            CompleteMemberDetail detail_index = TypeObjectUtils::build_complete_member_detail(name_index, member_ann_builtin_index, ann_custom_HelloWorld);
            CompleteStructMember member_index = TypeObjectUtils::build_complete_struct_member(common_index, detail_index);
            TypeObjectUtils::add_complete_struct_member(member_seq_HelloWorld, member_index);
        }
        {
            TypeIdentifierPair type_ids_message;
            ReturnCode_t return_code_message {eprosima::fastdds::dds::RETCODE_OK};
            return_code_message =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "anonymous_array_char_20", type_ids_message);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_message)
            {
                return_code_message =
                    eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                    "_char", type_ids_message);

                if (eprosima::fastdds::dds::RETCODE_OK != return_code_message)
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "Array element TypeIdentifier unknown to TypeObjectRegistry.");
                    return;
                }
                bool element_identifier_anonymous_array_char_20_ec {false};
                TypeIdentifier* element_identifier_anonymous_array_char_20 {new TypeIdentifier(TypeObjectUtils::retrieve_complete_type_identifier(type_ids_message, element_identifier_anonymous_array_char_20_ec))};
                if (!element_identifier_anonymous_array_char_20_ec)
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Array element TypeIdentifier inconsistent.");
                    return;
                }
                EquivalenceKind equiv_kind_anonymous_array_char_20 = EK_COMPLETE;
                if (TK_NONE == type_ids_message.type_identifier2()._d())
                {
                    equiv_kind_anonymous_array_char_20 = EK_BOTH;
                }
                CollectionElementFlag element_flags_anonymous_array_char_20 = 0;
                PlainCollectionHeader header_anonymous_array_char_20 = TypeObjectUtils::build_plain_collection_header(equiv_kind_anonymous_array_char_20, element_flags_anonymous_array_char_20);
                {
                    SBoundSeq array_bound_seq;
                        TypeObjectUtils::add_array_dimension(array_bound_seq, static_cast<SBound>(20));

                    PlainArraySElemDefn array_sdefn = TypeObjectUtils::build_plain_array_s_elem_defn(header_anonymous_array_char_20, array_bound_seq,
                                eprosima::fastcdr::external<TypeIdentifier>(element_identifier_anonymous_array_char_20));
                    if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                            TypeObjectUtils::build_and_register_s_array_type_identifier(array_sdefn, "anonymous_array_char_20", type_ids_message))
                    {
                        EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "anonymous_array_char_20 already registered in TypeObjectRegistry for a different type.");
                    }
                }
            }
            StructMemberFlag member_flags_message = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructKind::NOT_APPLIED,
                    false, false, false, false);
            MemberId member_id_message = 0x00000001;
            bool common_message_ec {false};
            CommonStructMember common_message {TypeObjectUtils::build_common_struct_member(member_id_message, member_flags_message, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_message, common_message_ec))};
            if (!common_message_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure message member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_message = "message";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_message;
            ann_custom_HelloWorld.reset();
            CompleteMemberDetail detail_message = TypeObjectUtils::build_complete_member_detail(name_message, member_ann_builtin_message, ann_custom_HelloWorld);
            CompleteStructMember member_message = TypeObjectUtils::build_complete_struct_member(common_message, detail_message);
            TypeObjectUtils::add_complete_struct_member(member_seq_HelloWorld, member_message);
        }
        CompleteStructType struct_type_HelloWorld = TypeObjectUtils::build_complete_struct_type(struct_flags_HelloWorld, header_HelloWorld, member_seq_HelloWorld);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_HelloWorld, type_name_HelloWorld.to_string(), type_ids_HelloWorld))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "HelloWorld already registered in TypeObjectRegistry for a different type.");
        }
    }
}

