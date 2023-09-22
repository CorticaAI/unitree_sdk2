/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to CXX Translator
  File name: RequestHeader_.idl
  Source: RequestHeader_.hpp
  Cyclone DDS: v0.10.2

*****************************************************************/
#ifndef DDSCXX_REQUESTHEADER__HPP
#define DDSCXX_REQUESTHEADER__HPP

#include "RequestIdentity_.hpp"

#include "RequestLease_.hpp"

#include "RequestPolicy_.hpp"


namespace unitree_api
{
namespace msg
{
namespace dds_
{
class RequestHeader_
{
private:
 ::unitree_api::msg::dds_::RequestIdentity_ identity_;
 ::unitree_api::msg::dds_::RequestLease_ lease_;
 ::unitree_api::msg::dds_::RequestPolicy_ policy_;

public:
  RequestHeader_() = default;

  explicit RequestHeader_(
    const ::unitree_api::msg::dds_::RequestIdentity_& identity,
    const ::unitree_api::msg::dds_::RequestLease_& lease,
    const ::unitree_api::msg::dds_::RequestPolicy_& policy) :
    identity_(identity),
    lease_(lease),
    policy_(policy) { }

  const ::unitree_api::msg::dds_::RequestIdentity_& identity() const { return this->identity_; }
  ::unitree_api::msg::dds_::RequestIdentity_& identity() { return this->identity_; }
  void identity(const ::unitree_api::msg::dds_::RequestIdentity_& _val_) { this->identity_ = _val_; }
  void identity(::unitree_api::msg::dds_::RequestIdentity_&& _val_) { this->identity_ = _val_; }
  const ::unitree_api::msg::dds_::RequestLease_& lease() const { return this->lease_; }
  ::unitree_api::msg::dds_::RequestLease_& lease() { return this->lease_; }
  void lease(const ::unitree_api::msg::dds_::RequestLease_& _val_) { this->lease_ = _val_; }
  void lease(::unitree_api::msg::dds_::RequestLease_&& _val_) { this->lease_ = _val_; }
  const ::unitree_api::msg::dds_::RequestPolicy_& policy() const { return this->policy_; }
  ::unitree_api::msg::dds_::RequestPolicy_& policy() { return this->policy_; }
  void policy(const ::unitree_api::msg::dds_::RequestPolicy_& _val_) { this->policy_ = _val_; }
  void policy(::unitree_api::msg::dds_::RequestPolicy_&& _val_) { this->policy_ = _val_; }

  bool operator==(const RequestHeader_& _other) const
  {
    (void) _other;
    return identity_ == _other.identity_ &&
      lease_ == _other.lease_ &&
      policy_ == _other.policy_;
  }

  bool operator!=(const RequestHeader_& _other) const
  {
    return !(*this == _other);
  }

};

}

}

}

#include "dds/topic/TopicTraits.hpp"
#include "org/eclipse/cyclonedds/topic/datatopic.hpp"

namespace org {
namespace eclipse {
namespace cyclonedds {
namespace topic {

template <> constexpr const char* TopicTraits<::unitree_api::msg::dds_::RequestHeader_>::getTypeName()
{
  return "unitree_api::msg::dds_::RequestHeader_";
}

template <> constexpr bool TopicTraits<::unitree_api::msg::dds_::RequestHeader_>::isKeyless()
{
  return true;
}

#ifdef DDSCXX_HAS_TYPE_DISCOVERY
template<> constexpr unsigned int TopicTraits<::unitree_api::msg::dds_::RequestHeader_>::type_map_blob_sz() { return 1064; }
template<> constexpr unsigned int TopicTraits<::unitree_api::msg::dds_::RequestHeader_>::type_info_blob_sz() { return 244; }
template<> inline const uint8_t * TopicTraits<::unitree_api::msg::dds_::RequestHeader_>::type_map_blob() {
  static const uint8_t blob[] = {
 0x4f,  0x01,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00,  0xf1,  0xfd,  0xdd,  0x30,  0x0e,  0xc6,  0xac,  0x5e, 
 0x7a,  0x4b,  0xda,  0xf7,  0xa4,  0xdc,  0xc7,  0x00,  0x71,  0x00,  0x00,  0x00,  0xf1,  0x51,  0x01,  0x00, 
 0x01,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x61,  0x00,  0x00,  0x00,  0x03,  0x00,  0x00,  0x00, 
 0x19,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0xf1,  0x8f,  0x78,  0x20,  0x91,  0xd8, 
 0x0b,  0x89,  0x0d,  0xad,  0xf3,  0xe7,  0xd6,  0x60,  0xe6,  0xff,  0x48,  0x3d,  0x1f,  0x00,  0x00,  0x00, 
 0x19,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0xf1,  0xe7,  0xaa,  0x98,  0x61,  0xf7, 
 0xb0,  0x22,  0x20,  0x9b,  0xda,  0x6c,  0x89,  0x3f,  0xca,  0x1a,  0xdc,  0x13,  0xcf,  0x00,  0x00,  0x00, 
 0x19,  0x00,  0x00,  0x00,  0x02,  0x00,  0x00,  0x00,  0x01,  0x00,  0xf1,  0x76,  0x57,  0x81,  0x5a,  0xa1, 
 0x5f,  0x25,  0x32,  0xc9,  0x00,  0x8d,  0x48,  0x4d,  0x4f,  0xf4,  0xaf,  0x8b,  0x57,  0xf1,  0x8f,  0x78, 
 0x20,  0x91,  0xd8,  0x0b,  0x89,  0x0d,  0xad,  0xf3,  0xe7,  0xd6,  0x60,  0xe6,  0x33,  0x00,  0x00,  0x00, 
 0xf1,  0x51,  0x01,  0x00,  0x01,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x23,  0x00,  0x00,  0x00, 
 0x02,  0x00,  0x00,  0x00,  0x0b,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x05,  0xb8, 
 0x0b,  0xb7,  0x74,  0x00,  0x0b,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x05,  0xd3, 
 0x3a,  0xff,  0x5d,  0xf1,  0xe7,  0xaa,  0x98,  0x61,  0xf7,  0xb0,  0x22,  0x20,  0x9b,  0xda,  0x6c,  0x89, 
 0x3f,  0xca,  0x00,  0x00,  0x23,  0x00,  0x00,  0x00,  0xf1,  0x51,  0x01,  0x00,  0x01,  0x00,  0x00,  0x00, 
 0x00,  0x00,  0x00,  0x00,  0x13,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x0b,  0x00,  0x00,  0x00, 
 0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x05,  0xb8,  0x0b,  0xb7,  0x74,  0xf1,  0x76,  0x57,  0x81,  0x5a, 
 0xa1,  0x5f,  0x25,  0x32,  0xc9,  0x00,  0x8d,  0x48,  0x4d,  0x4f,  0x00,  0x00,  0x33,  0x00,  0x00,  0x00, 
 0xf1,  0x51,  0x01,  0x00,  0x01,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x23,  0x00,  0x00,  0x00, 
 0x02,  0x00,  0x00,  0x00,  0x0b,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x04,  0xb9, 
 0x88,  0x29,  0x5c,  0x00,  0x0b,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x01,  0x14, 
 0x70,  0x9c,  0x93,  0x00,  0x4e,  0x02,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00,  0xf2,  0x9b,  0x9a,  0x2d, 
 0x50,  0x17,  0x56,  0xf6,  0x0f,  0x8c,  0x92,  0x41,  0xb0,  0xee,  0xdb,  0x00,  0xbd,  0x00,  0x00,  0x00, 
 0xf2,  0x51,  0x01,  0x00,  0x2f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x27,  0x00,  0x00,  0x00, 
 0x75,  0x6e,  0x69,  0x74,  0x72,  0x65,  0x65,  0x5f,  0x61,  0x70,  0x69,  0x3a,  0x3a,  0x6d,  0x73,  0x67, 
 0x3a,  0x3a,  0x64,  0x64,  0x73,  0x5f,  0x3a,  0x3a,  0x52,  0x65,  0x71,  0x75,  0x65,  0x73,  0x74,  0x48, 
 0x65,  0x61,  0x64,  0x65,  0x72,  0x5f,  0x00,  0x00,  0x81,  0x00,  0x00,  0x00,  0x03,  0x00,  0x00,  0x00, 
 0x27,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0xf2,  0xf8,  0x8b,  0x48,  0x81,  0xc6, 
 0xcf,  0x5a,  0x29,  0xdc,  0xd6,  0x89,  0x3c,  0xdd,  0x22,  0x00,  0x00,  0x00,  0x09,  0x00,  0x00,  0x00, 
 0x69,  0x64,  0x65,  0x6e,  0x74,  0x69,  0x74,  0x79,  0x00,  0x00,  0x00,  0x00,  0x24,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0xf2,  0x0c,  0xd7,  0x3d,  0x1a,  0x1e,  0x87,  0xee,  0x27,  0x8f, 
 0x84,  0xee,  0x9f,  0x41,  0xe3,  0x00,  0x00,  0x00,  0x06,  0x00,  0x00,  0x00,  0x6c,  0x65,  0x61,  0x73, 
 0x65,  0x00,  0x00,  0x00,  0x25,  0x00,  0x00,  0x00,  0x02,  0x00,  0x00,  0x00,  0x01,  0x00,  0xf2,  0x99, 
 0xe3,  0xb9,  0xf0,  0xba,  0xac,  0xdc,  0x09,  0x3a,  0x18,  0x6d,  0x89,  0x7a,  0x17,  0x00,  0x00,  0x00, 
 0x07,  0x00,  0x00,  0x00,  0x70,  0x6f,  0x6c,  0x69,  0x63,  0x79,  0x00,  0x00,  0x00,  0xf2,  0xf8,  0x8b, 
 0x48,  0x81,  0xc6,  0xcf,  0x5a,  0x29,  0xdc,  0xd6,  0x89,  0x3c,  0xdd,  0x22,  0x75,  0x00,  0x00,  0x00, 
 0xf2,  0x51,  0x01,  0x00,  0x31,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x29,  0x00,  0x00,  0x00, 
 0x75,  0x6e,  0x69,  0x74,  0x72,  0x65,  0x65,  0x5f,  0x61,  0x70,  0x69,  0x3a,  0x3a,  0x6d,  0x73,  0x67, 
 0x3a,  0x3a,  0x64,  0x64,  0x73,  0x5f,  0x3a,  0x3a,  0x52,  0x65,  0x71,  0x75,  0x65,  0x73,  0x74,  0x49, 
 0x64,  0x65,  0x6e,  0x74,  0x69,  0x74,  0x79,  0x5f,  0x00,  0x00,  0x00,  0x00,  0x35,  0x00,  0x00,  0x00, 
 0x02,  0x00,  0x00,  0x00,  0x11,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x05,  0x00, 
 0x03,  0x00,  0x00,  0x00,  0x69,  0x64,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x15,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x05,  0x00,  0x07,  0x00,  0x00,  0x00,  0x61,  0x70,  0x69,  0x5f, 
 0x69,  0x64,  0x00,  0x00,  0x00,  0xf2,  0x0c,  0xd7,  0x3d,  0x1a,  0x1e,  0x87,  0xee,  0x27,  0x8f,  0x84, 
 0xee,  0x9f,  0x41,  0xe3,  0x55,  0x00,  0x00,  0x00,  0xf2,  0x51,  0x01,  0x00,  0x2e,  0x00,  0x00,  0x00, 
 0x00,  0x00,  0x00,  0x00,  0x26,  0x00,  0x00,  0x00,  0x75,  0x6e,  0x69,  0x74,  0x72,  0x65,  0x65,  0x5f, 
 0x61,  0x70,  0x69,  0x3a,  0x3a,  0x6d,  0x73,  0x67,  0x3a,  0x3a,  0x64,  0x64,  0x73,  0x5f,  0x3a,  0x3a, 
 0x52,  0x65,  0x71,  0x75,  0x65,  0x73,  0x74,  0x4c,  0x65,  0x61,  0x73,  0x65,  0x5f,  0x00,  0x00,  0x00, 
 0x19,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x11,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x05,  0x00,  0x03,  0x00,  0x00,  0x00,  0x69,  0x64,  0x00,  0x00,  0x00,  0xf2,  0x99,  0xe3, 
 0xb9,  0xf0,  0xba,  0xac,  0xdc,  0x09,  0x3a,  0x18,  0x6d,  0x89,  0x7a,  0x17,  0x76,  0x00,  0x00,  0x00, 
 0xf2,  0x51,  0x01,  0x00,  0x2f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x27,  0x00,  0x00,  0x00, 
 0x75,  0x6e,  0x69,  0x74,  0x72,  0x65,  0x65,  0x5f,  0x61,  0x70,  0x69,  0x3a,  0x3a,  0x6d,  0x73,  0x67, 
 0x3a,  0x3a,  0x64,  0x64,  0x73,  0x5f,  0x3a,  0x3a,  0x52,  0x65,  0x71,  0x75,  0x65,  0x73,  0x74,  0x50, 
 0x6f,  0x6c,  0x69,  0x63,  0x79,  0x5f,  0x00,  0x00,  0x3a,  0x00,  0x00,  0x00,  0x02,  0x00,  0x00,  0x00, 
 0x17,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x04,  0x00,  0x09,  0x00,  0x00,  0x00, 
 0x70,  0x72,  0x69,  0x6f,  0x72,  0x69,  0x74,  0x79,  0x00,  0x00,  0x00,  0x00,  0x16,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x01,  0x00,  0x08,  0x00,  0x00,  0x00,  0x6e,  0x6f,  0x72,  0x65, 
 0x70,  0x6c,  0x79,  0x00,  0x00,  0x00,  0x00,  0x00,  0x7c,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00, 
 0xf2,  0x9b,  0x9a,  0x2d,  0x50,  0x17,  0x56,  0xf6,  0x0f,  0x8c,  0x92,  0x41,  0xb0,  0xee,  0xdb,  0xf1, 
 0xfd,  0xdd,  0x30,  0x0e,  0xc6,  0xac,  0x5e,  0x7a,  0x4b,  0xda,  0xf7,  0xa4,  0xdc,  0xc7,  0xf2,  0xf8, 
 0x8b,  0x48,  0x81,  0xc6,  0xcf,  0x5a,  0x29,  0xdc,  0xd6,  0x89,  0x3c,  0xdd,  0x22,  0xf1,  0x8f,  0x78, 
 0x20,  0x91,  0xd8,  0x0b,  0x89,  0x0d,  0xad,  0xf3,  0xe7,  0xd6,  0x60,  0xe6,  0xf2,  0x0c,  0xd7,  0x3d, 
 0x1a,  0x1e,  0x87,  0xee,  0x27,  0x8f,  0x84,  0xee,  0x9f,  0x41,  0xe3,  0xf1,  0xe7,  0xaa,  0x98,  0x61, 
 0xf7,  0xb0,  0x22,  0x20,  0x9b,  0xda,  0x6c,  0x89,  0x3f,  0xca,  0xf2,  0x99,  0xe3,  0xb9,  0xf0,  0xba, 
 0xac,  0xdc,  0x09,  0x3a,  0x18,  0x6d,  0x89,  0x7a,  0x17,  0xf1,  0x76,  0x57,  0x81,  0x5a,  0xa1,  0x5f, 
 0x25,  0x32,  0xc9,  0x00,  0x8d,  0x48,  0x4d,  0x4f, };
  return blob;
}
template<> inline const uint8_t * TopicTraits<::unitree_api::msg::dds_::RequestHeader_>::type_info_blob() {
  static const uint8_t blob[] = {
 0xf0,  0x00,  0x00,  0x00,  0x01,  0x10,  0x00,  0x40,  0x70,  0x00,  0x00,  0x00,  0x6c,  0x00,  0x00,  0x00, 
 0x14,  0x00,  0x00,  0x00,  0xf1,  0xfd,  0xdd,  0x30,  0x0e,  0xc6,  0xac,  0x5e,  0x7a,  0x4b,  0xda,  0xf7, 
 0xa4,  0xdc,  0xc7,  0x00,  0x75,  0x00,  0x00,  0x00,  0x03,  0x00,  0x00,  0x00,  0x4c,  0x00,  0x00,  0x00, 
 0x03,  0x00,  0x00,  0x00,  0x14,  0x00,  0x00,  0x00,  0xf1,  0x8f,  0x78,  0x20,  0x91,  0xd8,  0x0b,  0x89, 
 0x0d,  0xad,  0xf3,  0xe7,  0xd6,  0x60,  0xe6,  0x00,  0x37,  0x00,  0x00,  0x00,  0x14,  0x00,  0x00,  0x00, 
 0xf1,  0xe7,  0xaa,  0x98,  0x61,  0xf7,  0xb0,  0x22,  0x20,  0x9b,  0xda,  0x6c,  0x89,  0x3f,  0xca,  0x00, 
 0x27,  0x00,  0x00,  0x00,  0x14,  0x00,  0x00,  0x00,  0xf1,  0x76,  0x57,  0x81,  0x5a,  0xa1,  0x5f,  0x25, 
 0x32,  0xc9,  0x00,  0x8d,  0x48,  0x4d,  0x4f,  0x00,  0x37,  0x00,  0x00,  0x00,  0x02,  0x10,  0x00,  0x40, 
 0x70,  0x00,  0x00,  0x00,  0x6c,  0x00,  0x00,  0x00,  0x14,  0x00,  0x00,  0x00,  0xf2,  0x9b,  0x9a,  0x2d, 
 0x50,  0x17,  0x56,  0xf6,  0x0f,  0x8c,  0x92,  0x41,  0xb0,  0xee,  0xdb,  0x00,  0xc1,  0x00,  0x00,  0x00, 
 0x03,  0x00,  0x00,  0x00,  0x4c,  0x00,  0x00,  0x00,  0x03,  0x00,  0x00,  0x00,  0x14,  0x00,  0x00,  0x00, 
 0xf2,  0xf8,  0x8b,  0x48,  0x81,  0xc6,  0xcf,  0x5a,  0x29,  0xdc,  0xd6,  0x89,  0x3c,  0xdd,  0x22,  0x00, 
 0x79,  0x00,  0x00,  0x00,  0x14,  0x00,  0x00,  0x00,  0xf2,  0x0c,  0xd7,  0x3d,  0x1a,  0x1e,  0x87,  0xee, 
 0x27,  0x8f,  0x84,  0xee,  0x9f,  0x41,  0xe3,  0x00,  0x59,  0x00,  0x00,  0x00,  0x14,  0x00,  0x00,  0x00, 
 0xf2,  0x99,  0xe3,  0xb9,  0xf0,  0xba,  0xac,  0xdc,  0x09,  0x3a,  0x18,  0x6d,  0x89,  0x7a,  0x17,  0x00, 
 0x7a,  0x00,  0x00,  0x00, };
  return blob;
}
#endif //DDSCXX_HAS_TYPE_DISCOVERY

} //namespace topic
} //namespace cyclonedds
} //namespace eclipse
} //namespace org

namespace dds {
namespace topic {

template <>
struct topic_type_name<::unitree_api::msg::dds_::RequestHeader_>
{
    static std::string value()
    {
      return org::eclipse::cyclonedds::topic::TopicTraits<::unitree_api::msg::dds_::RequestHeader_>::getTypeName();
    }
};

}
}

REGISTER_TOPIC_TYPE(::unitree_api::msg::dds_::RequestHeader_)

namespace org{
namespace eclipse{
namespace cyclonedds{
namespace core{
namespace cdr{

template<>
propvec &get_type_props<::unitree_api::msg::dds_::RequestHeader_>();

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool write(T& streamer, const ::unitree_api::msg::dds_::RequestHeader_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.identity(), prop))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.lease(), prop))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 2:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.policy(), prop))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool write(S& str, const ::unitree_api::msg::dds_::RequestHeader_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_api::msg::dds_::RequestHeader_>();
  str.set_mode(cdr_stream::stream_mode::write, as_key);
  return write(str, instance, props.data()); 
}

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool read(T& streamer, ::unitree_api::msg::dds_::RequestHeader_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.identity(), prop))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.lease(), prop))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 2:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.policy(), prop))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool read(S& str, ::unitree_api::msg::dds_::RequestHeader_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_api::msg::dds_::RequestHeader_>();
  str.set_mode(cdr_stream::stream_mode::read, as_key);
  return read(str, instance, props.data()); 
}

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool move(T& streamer, const ::unitree_api::msg::dds_::RequestHeader_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.identity(), prop))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.lease(), prop))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 2:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.policy(), prop))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool move(S& str, const ::unitree_api::msg::dds_::RequestHeader_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_api::msg::dds_::RequestHeader_>();
  str.set_mode(cdr_stream::stream_mode::move, as_key);
  return move(str, instance, props.data()); 
}

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool max(T& streamer, const ::unitree_api::msg::dds_::RequestHeader_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.identity(), prop))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.lease(), prop))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 2:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.policy(), prop))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool max(S& str, const ::unitree_api::msg::dds_::RequestHeader_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_api::msg::dds_::RequestHeader_>();
  str.set_mode(cdr_stream::stream_mode::max, as_key);
  return max(str, instance, props.data()); 
}

} //namespace cdr
} //namespace core
} //namespace cyclonedds
} //namespace eclipse
} //namespace org

#endif // DDSCXX_REQUESTHEADER__HPP