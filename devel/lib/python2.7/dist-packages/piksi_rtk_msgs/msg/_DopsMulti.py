# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from piksi_rtk_msgs/DopsMulti.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class DopsMulti(genpy.Message):
  _md5sum = "c8ec518c5a95442b85a41a69915d3477"
  _type = "piksi_rtk_msgs/DopsMulti"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# This dilution of precision (DOP) message describes the effect of navigation satellite geometry on positional
# measurement precision.

Header header

uint32 tow  # GPS Time of Week [ms].
uint16 gdop # Geometric Dilution of Precision.
uint16 pdop # Position Dilution of Precision.
uint16 tdop # Time Dilution of Precision.
uint16 hdop # Horizontal Dilution of Precision.
uint16 vdop # Vertical Dilution of Precision.
uint8 flags # Indicates the position solution with which the DOPS message corresponds.

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id
"""
  __slots__ = ['header','tow','gdop','pdop','tdop','hdop','vdop','flags']
  _slot_types = ['std_msgs/Header','uint32','uint16','uint16','uint16','uint16','uint16','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,tow,gdop,pdop,tdop,hdop,vdop,flags

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DopsMulti, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.tow is None:
        self.tow = 0
      if self.gdop is None:
        self.gdop = 0
      if self.pdop is None:
        self.pdop = 0
      if self.tdop is None:
        self.tdop = 0
      if self.hdop is None:
        self.hdop = 0
      if self.vdop is None:
        self.vdop = 0
      if self.flags is None:
        self.flags = 0
    else:
      self.header = std_msgs.msg.Header()
      self.tow = 0
      self.gdop = 0
      self.pdop = 0
      self.tdop = 0
      self.hdop = 0
      self.vdop = 0
      self.flags = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_I5HB().pack(_x.tow, _x.gdop, _x.pdop, _x.tdop, _x.hdop, _x.vdop, _x.flags))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 15
      (_x.tow, _x.gdop, _x.pdop, _x.tdop, _x.hdop, _x.vdop, _x.flags,) = _get_struct_I5HB().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_I5HB().pack(_x.tow, _x.gdop, _x.pdop, _x.tdop, _x.hdop, _x.vdop, _x.flags))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 15
      (_x.tow, _x.gdop, _x.pdop, _x.tdop, _x.hdop, _x.vdop, _x.flags,) = _get_struct_I5HB().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_I5HB = None
def _get_struct_I5HB():
    global _struct_I5HB
    if _struct_I5HB is None:
        _struct_I5HB = struct.Struct("<I5HB")
    return _struct_I5HB
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
